@interface NWPrivacyProxyNetwork : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) I status;
- (void)setStatus:;
- (void)setType:;
- (int)type;
- (id)description;
- (unsigned int)status;
@end
