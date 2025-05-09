@interface AWEIMSelectSingleGroupPanelConfiguration : NSObject
@property (nonatomic) NSString conId;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL shouldShowSelectAllButton;
@property (nonatomic) BOOL isMultiSelect;
@property (nonatomic) NSNumber minSelectCount;
@property (nonatomic) NSNumber maxSelectCount;
@property (nonatomic) NSString maximumSelectToast;
@property (nonatomic) NSString unselectReason;
@property (nonatomic) BOOL doNotHideMyself;
@property (nonatomic) BOOL isDisplayMyselfSuffix;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) NSArray filterUserList;
@property (nonatomic) NSArray defaultSelectUserList;
@property (nonatomic) NSArray stickOntopUidList;
@property (nonatomic) @? dataBlock;
- (id)trackParams;
- (void)setTrackParams:;
- (void)setMaxSelectCount:;
- (id)maxSelectCount;
- (id)conId;
- (void)setConId:;
- (BOOL)shouldShowSelectAllButton;
- (void)setShouldShowSelectAllButton:;
- (id)minSelectCount;
- (void)setMinSelectCount:;
- (id)maximumSelectToast;
- (void)setMaximumSelectToast:;
- (id)unselectReason;
- (void)setUnselectReason:;
- (BOOL)doNotHideMyself;
- (void)setDoNotHideMyself:;
- (BOOL)isDisplayMyselfSuffix;
- (void)setIsDisplayMyselfSuffix:;
- (id)filterUserList;
- (void)setFilterUserList:;
- (id)defaultSelectUserList;
- (void)setDefaultSelectUserList:;
- (id)stickOntopUidList;
- (void)setStickOntopUidList:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)dataBlock;
- (void)setDataBlock:;
- (BOOL)isMultiSelect;
- (void)setIsMultiSelect:;
@end
