@interface AWEIMIncentiveChatBagTask : NSObject
@property (nonatomic) NSString taskId;
@property (nonatomic) NSString taskToken;
@property (nonatomic) NSString taskGroupId;
@property (nonatomic) NSString taskTokenEnterFrom;
@property (nonatomic) NSString scene;
- (id)taskToken;
- (void)setTaskToken:;
- (id)taskTokenEnterFrom;
- (id)taskGroupId;
- (id)initWithMangoReflowDictionary:;
- (void)setTaskGroupId:;
- (void)setTaskTokenEnterFrom:;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (id)initWithDictionary:;
- (id)taskId;
- (void)setTaskId:;
@end
