/* ContactDetailsLabelViewController.h
 *
 * Copyright (C) 2012  Belledonne Comunications, Grenoble, France
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or   
 *  (at your option) any later version.                                 
 *                                                                      
 *  This program is distributed in the hope that it will be useful,     
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of      
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the       
 *  GNU General Public License for more details.                
 *                                                                      
 *  You should have received a copy of the GNU General Public License   
 *  along with this program; if not, write to the Free Software         
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */        

#import <UIKit/UIKit.h>
#import "UICompositeViewController.h"

@protocol ContactDetailsLabelViewDelegate <NSObject>

- (void)changeContactDetailsLabel:(NSString*)label;

@end

@interface ContactDetailsLabelViewController : UIViewController<UITableViewDelegate, UITableViewDataSource, UICompositeViewDelegate> {
}

@property (nonatomic, copy) NSString *selectedData;
@property (nonatomic, strong) NSDictionary *dataList;
@property (nonatomic, strong) IBOutlet UITableView *tableView;
@property (nonatomic, strong) id<ContactDetailsLabelViewDelegate> delegate;

- (IBAction)onBackClick:(id)event;

@end
