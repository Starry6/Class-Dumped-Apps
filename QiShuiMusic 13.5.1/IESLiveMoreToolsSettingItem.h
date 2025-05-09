@interface IESLiveMoreToolsSettingItem : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) BOOL contentTopAlignment;
@property (nonatomic) q itemType;
@property (nonatomic) BOOL on;
@property (nonatomic) @? switchBlock;
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) @? buttonTapBlock;
@property (nonatomic) q idx;
@property (nonatomic) q orderIdx;
@property (nonatomic) q section;
@property (nonatomic) q sectionOrderIdx;
@property (nonatomic) NSString sectionTitle;
@property (nonatomic) @? toolbarItemShowBlock;
@property (nonatomic) @? toolbarItemTapBlock;
@property (nonatomic) NSString toolbarItemTitle;
@property (nonatomic) BOOL enable;
@property (nonatomic) double itemHeight;
@property (nonatomic) double itemTopMargin;
@property (nonatomic) @? notesIconClickBlock;
@property (nonatomic) BOOL enableShowNotesIcon;
@property (nonatomic) UIImage notesIcon;
@property (nonatomic) BOOL isButtonTopCenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)sectionOrderIdx;
- (void)setSwitchBlock:;
- (void)setIdx:;
- (id)buttonTapBlock;
- (BOOL)contentTopAlignment;
- (BOOL)enableShowNotesIcon;
- (BOOL)isButtonTopCenter;
- (double)itemTopMargin;
- (id)notesIconClickBlock;
- (long long)orderIdx;
- (void)setButtonTapBlock:;
- (void)setContentTopAlignment:;
- (void)setEnableShowNotesIcon:;
- (void)setIsButtonTopCenter:;
- (void)setItemTopMargin:;
- (void)setNotesIcon:;
- (void)setNotesIconClickBlock:;
- (void)setOrderIdx:;
- (void)setSectionOrderIdx:;
- (void)setToolbarItemShowBlock:;
- (void)setToolbarItemTapBlock:;
- (void)setToolbarItemTitle:;
- (id)switchBlock;
- (id)toolbarItemShowBlock;
- (id)toolbarItemTapBlock;
- (id)toolbarItemTitle;
- (BOOL)enable;
- (id)content;
- (void)setItemType:;
- (void)setContent:;
- (id)init;
- (BOOL)on;
- (void)setTitle:;
- (void)setOn:;
- (void)setSection:;
- (long long)itemType;
- (id)title;
- (void).cxx_destruct;
- (id)buttonTitle;
- (void)setEnable:;
- (long long)section;
- (long long)idx;
- (void)setButtonTitle:;
- (id)sectionTitle;
- (double)itemHeight;
- (void)setSectionTitle:;
- (id)notesIcon;
- (void)setItemHeight:;
@end
