@interface AWEPCTChallengeInfoContextTaskCreator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)createTaskWithContext:;
+ (void)deprecated_updateContext:challengeModel:;
@end
