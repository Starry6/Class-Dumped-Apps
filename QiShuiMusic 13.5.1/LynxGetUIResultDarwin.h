@interface LynxGetUIResultDarwin : NSObject
@property (nonatomic) NSArray uiArray;
@property (nonatomic) NSInteger errCode;
@property (nonatomic) NSString errMsg;
- (id)uiArray;
- (int)errCode;
- (id)errMsg;
- (id)init:errCode:errMsg:;
- (void).cxx_destruct;
@end
