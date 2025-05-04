@interface AWENetworkServiceLog : NSObject
@property (nonatomic) NSArray whiteArray;
- (void)networkLogForURLString:response:jsonObj:error:;
- (id)whiteArray;
- (id)dictionaryToString:;
- (BOOL)needLogResponseBody:;
- (void)setWhiteArray:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
