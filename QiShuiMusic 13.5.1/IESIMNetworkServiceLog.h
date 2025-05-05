@interface IESIMNetworkServiceLog : NSObject
@property (nonatomic) NSArray whiteArray;
- (id)dictionaryToString:;
- (BOOL)needLogResponseBody:;
- (void)networkLogForURLString:response:jsonObj:error:;
- (void)setWhiteArray:;
- (id)whiteArray;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
