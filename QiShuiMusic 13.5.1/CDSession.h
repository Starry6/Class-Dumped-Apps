@interface CDSession : NSObject
@property (nonatomic) Q clientId;
@property (nonatomic) BOOL unlocked;
- (id)init;
- (unsigned long long)clientId;
- (BOOL)unlocked;
- (void)setUnlocked:;
- (BOOL)isClassCLocked;
- (id)initWithClientId:;
- (id)initWithClientId:enableCaching:;
- (id)attributeNamesWithError:;
- (id)budgetNamesWithError:;
- (id)attributeForName:type:error:;
- (id)budgetForName:type:error:;
- (id)registerAttributeWithName:type:dataProtectionClass:error:;
- (id)representationStringFromAttribute:value:error:;
- (id)getDevices;
+ (id)sharedSessionWithClientId:;
@end
