@interface AWEUserPerfLoginModel : NSObject
@property (nonatomic) NSString loginType;
@property (nonatomic) BOOL isInLoginProcedure;
- (void)generateDefaultValue;
- (BOOL)isInLoginProcedure;
- (void)setIsInLoginProcedure:;
- (id)init;
- (void).cxx_destruct;
- (void)setLoginType:;
- (id)loginType;
@end
