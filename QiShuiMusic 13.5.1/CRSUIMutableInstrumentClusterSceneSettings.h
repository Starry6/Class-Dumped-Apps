@interface CRSUIMutableInstrumentClusterSceneSettings : UIMutableCarPlayApplicationSceneSettings
@property (nonatomic) Q itemType;
@property (nonatomic) Q showsCompass;
@property (nonatomic) Q showsSpeedLimit;
@property (nonatomic) Q showsETA;
@property (nonatomic) Q layoutJustification;
@property (nonatomic) q mapStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setItemType:;
- (unsigned long long)itemType;
- (id)description;
- (id)copyWithZone:;
- (void)setShowsCompass:;
- (unsigned long long)showsCompass;
- (long long)mapStyle;
- (unsigned long long)layoutJustification;
- (unsigned long long)showsSpeedLimit;
- (unsigned long long)showsETA;
- (void)setMapStyle:;
- (void)setLayoutJustification:;
- (void)setShowsSpeedLimit:;
- (void)setShowsETA:;
@end
