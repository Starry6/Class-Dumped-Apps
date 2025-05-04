@interface AWEProfileMateButtonContext : NSObject
@property (nonatomic) AWEUserRelationContext relationContext;
@property (nonatomic) @? showMenuBlock;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSDictionary trackerParamDict;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setRelationContext:;
- (id)relationContext;
- (id)showMenuBlock;
- (id)trackerParamDict;
- (void)setShowMenuBlock:;
- (void)setTrackerParamDict:;
- (void).cxx_destruct;
@end
