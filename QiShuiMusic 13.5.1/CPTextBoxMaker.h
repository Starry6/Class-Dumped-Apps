@interface CPTextBoxMaker : NSObject
- (void)rotate:;
- (void)rotateTextBox:;
- (void)promoteLayoutsInCertainRegions:;
- (void)boxLayout:;
- (void)promoteLayoutsIn:;
- (void)boxLayoutsIn:;
- (void)makeBoxesWith:parent:;
- (BOOL)layoutIsSliced:;
+ (void)promoteLayoutsIn:;
+ (void)boxLayoutsIn:;
@end
