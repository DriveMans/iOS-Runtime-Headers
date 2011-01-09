/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptFunction, NSArray;



@interface SUNativeScriptMenuViewController : SUMenuViewController 
{
    SUScriptFunction *_action;
    NSArray *_menuItems;
}

@property(retain) NSArray *menuItems;
@property(retain) SUScriptFunction *action;


- (BOOL)isMenuItemEnabledAtIndex:(NSInteger)arg1;
- (void)performActionForMenuItemAtIndex:(NSInteger)arg1;
- (NSInteger)numberOfMenuItems;
- (id)titleOfMenuItemAtIndex:(NSInteger)arg1;
- (id)copyScriptViewController;
- (void)setMenuItems:(id)arg1;
- (id)menuItems;
- (id)action;
- (void)setAction:(id)arg1;
- (void)dealloc;

@end