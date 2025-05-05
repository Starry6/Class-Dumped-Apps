@interface EKNotificationCollectionOptions : NSObject
@property (nonatomic) EKSource source;
@property (nonatomic) NSString externalID;
@property (nonatomic) NSString externalIDTag;
- (id)externalID;
- (id)externalIDTag;
- (void).cxx_destruct;
- (id)source;
- (id)description;
- (id)initWithExternalID:externalIDTag:inSource:;
@end
