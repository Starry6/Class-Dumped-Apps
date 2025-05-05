@interface SALocalSearchDropAPinCompleted : SABaseCommand
@property (nonatomic) SALocalSearchMapItem mapItem;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mapItem;
- (id)groupIdentifier;
- (void)setMapItem:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)dropAPinCompleted;
+ (id)dropAPinCompletedWithDictionary:context:;
@end
