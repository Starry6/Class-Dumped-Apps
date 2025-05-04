@interface AWEPlayInteractionCommentPanelModel : NSObject
@property (nonatomic) BOOL needScrollToTop;
@property (nonatomic) BOOL isForcedToShowInputViewSync;
@property (nonatomic) NSArray insertIDs;
@property (nonatomic) Q intentTab;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) BOOL splitChange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterMethod:;
- (void)setInsertIDs:;
- (id)insertIDs;
- (id)enterMethod;
- (unsigned long long)intentTab;
- (BOOL)isForcedToShowInputViewSync;
- (void)setIsForcedToShowInputViewSync:;
- (void)setIntentTab:;
- (BOOL)needScrollToTop;
- (void)setNeedScrollToTop:;
- (BOOL)splitChange;
- (void)setSplitChange:;
- (void).cxx_destruct;
@end
