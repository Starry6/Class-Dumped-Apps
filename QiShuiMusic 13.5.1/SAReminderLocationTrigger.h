@interface SAReminderLocationTrigger : SAReminderTrigger
@property (nonatomic) NSURL contactIdentifier;
@property (nonatomic) NSString internalGUID;
@property (nonatomic) SALocation location;
@property (nonatomic) NSString mobileSpace;
@property (nonatomic) NSString timing;
- (id)timing;
- (id)groupIdentifier;
- (void)setContactIdentifier:;
- (id)contactIdentifier;
- (void)setTiming:;
- (id)location;
- (id)encodedClassName;
- (void)setLocation:;
- (id)mobileSpace;
- (void)setMobileSpace:;
- (id)internalGUID;
- (void)setInternalGUID:;
+ (id)locationTrigger;
+ (id)locationTriggerWithDictionary:context:;
@end
