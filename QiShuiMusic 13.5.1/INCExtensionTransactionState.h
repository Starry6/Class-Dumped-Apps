@interface INCExtensionTransactionState : NSObject
@property (nonatomic) q type;
@property (nonatomic) INIntent intent;
@property (nonatomic) INIntentResponse intentResponse;
@property (nonatomic) NSSet userActivities;
- (id)intent;
- (id)userActivities;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithType:intent:intentResponse:userActivities:;
- (id)intentResponse;
- (id)description;
@end
