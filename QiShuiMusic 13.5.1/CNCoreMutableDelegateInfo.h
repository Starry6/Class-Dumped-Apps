@interface CNCoreMutableDelegateInfo : CNCoreDelegateInfo
@property (nonatomic) NSNumber dsid;
@property (nonatomic) NSString altDSID;
@property (nonatomic) NSString principalPath;
@property (nonatomic) NSString appleID;
@property (nonatomic) NSPersonNameComponents nameComponents;
@property (nonatomic) BOOL isMe;
- (id)appleID;
- (BOOL)isMe;
- (id)dsid;
- (id)nameComponents;
- (void)setDsid:;
- (void)setAltDSID:;
- (id)altDSID;
- (void)setIsMe:;
- (void)setAppleID:;
- (void)setNameComponents:;
- (id)copyWithZone:;
- (id)principalPath;
- (void)setPrincipalPath:;
@end
