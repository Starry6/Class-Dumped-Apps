@interface IPAPhotoAdjustment : IPAAdjustment
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSString maskUUID;
@property (nonatomic) NSDictionary autoSettings;
- (BOOL)enabled;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)autoSettings;
- (id)maskUUID;
- (id)_debugDescriptionSuffix;
- (void)setMaskUUID:;
- (void)setAutoSettings:;
@end
