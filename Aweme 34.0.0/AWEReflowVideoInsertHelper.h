@interface AWEReflowVideoInsertHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackVideoInsertIfNeeded:response:extraInfo:;
+ (id)buildParams:shareTargetType:;
+ (void)clickShareReflowAlert:shareTargetType:tokenFromType:extraParams:;
+ (BOOL)shouldInsertReflowVideoToFeed;
@end
