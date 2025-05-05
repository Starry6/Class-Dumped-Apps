@interface WBSWebExtensionDeclarativeNetRequestMatchedRuleAction : NSObject
@property (nonatomic) double tabID;
@property (nonatomic) NSDate time;
@property (nonatomic) q type;
@property (nonatomic) NSURL url;
- (id)url;
- (id)time;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (double)tabID;
- (id)initWithTabID:type:url:;
@end
