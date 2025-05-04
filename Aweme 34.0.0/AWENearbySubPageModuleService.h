@interface AWENearbySubPageModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)openSubPageWithSubPageModel:delegate:pageType:willOpenBlk:hasOpenBlk:hasClose:;
- (void)clearnSubpageData;
- (void)addSchemaHandle:;
- (BOOL)subpageIsShowing;
@end
