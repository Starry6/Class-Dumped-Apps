@interface SANPGetVolumeLevelResponse : SABaseCommand
@property (nonatomic) NSNumber volumeValue;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setVolumeValue:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)volumeValue;
+ (id)getVolumeLevelResponse;
+ (id)getVolumeLevelResponseWithDictionary:context:;
@end
