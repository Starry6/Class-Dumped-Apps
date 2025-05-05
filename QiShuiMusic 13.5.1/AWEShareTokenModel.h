@interface AWEShareTokenModel : NSObject
@property (nonatomic) NSString itemName;
@property (nonatomic) NSString optionalParam;
@property (nonatomic) NSString optionalParam3;
@property (nonatomic) NSString tokenDescription;
@property (nonatomic) NSString appendTailText;
- (id)appendTailText;
- (id)optionalParam;
- (id)optionalParam3;
- (void)setAppendTailText:;
- (void)setOptionalParam3:;
- (void)setOptionalParam:;
- (void)setTokenDescription:;
- (id)tokenDescription;
- (id)itemName;
- (void).cxx_destruct;
- (void)setItemName:;
@end
