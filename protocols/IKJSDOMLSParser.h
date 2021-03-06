/* Generated by RuntimeBrowser.
 */

@protocol IKJSDOMLSParser <JSExport>

@required

- (int)appendAsChildrenAction;
- (int)insertAfterAction;
- (int)insertBeforeAction;
- (IKDOMDocument *)parse:(IKDOMLSInput *)arg1;
- (IKDOMNode *)parseWithContext:(IKDOMLSInput *)arg1 :(IKDOMNode *)arg2 :(int)arg3;
- (int)replaceAction;
- (int)replaceChildrenAction;

@end
