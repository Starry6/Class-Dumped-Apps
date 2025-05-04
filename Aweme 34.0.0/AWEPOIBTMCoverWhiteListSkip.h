@interface AWEPOIBTMCoverWhiteListSkip : NSObject
@property (nonatomic) NSArray whiteList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)whiteList;
- (void)setWhiteList:;
- (BOOL)judgeIsSkipCheckWithEvent:params:;
- (id)init;
- (void).cxx_destruct;
@end
