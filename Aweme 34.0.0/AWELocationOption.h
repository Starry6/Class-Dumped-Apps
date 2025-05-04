@interface AWELocationOption : NSObject
@property (nonatomic) BOOL newAdminVersion;
@property (nonatomic) NSString extraString;
- (void)setExtraString:;
- (BOOL)newAdminVersion;
- (id)extraString;
- (void)setNewAdminVersion:;
- (id)toBDUGLocationOption;
- (id)initWithNewAdminVersion:;
- (void).cxx_destruct;
@end
