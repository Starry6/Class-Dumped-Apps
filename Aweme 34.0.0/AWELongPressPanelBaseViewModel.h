@interface AWELongPressPanelBaseViewModel : NSObject
@property (nonatomic) AWELongPressPanelManager panelManager;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) Q actionType;
@property (nonatomic) NSString duxIconName;
@property (nonatomic) NSString duxIconSelectedName;
@property (nonatomic) UIColor duxIconColor;
@property (nonatomic) UIColor duxIconSelectedColor;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) NSArray iconImageURL;
@property (nonatomic) UIColor sheetBackgroundColor;
@property (nonatomic) UIColor iconBackgroundColor;
@property (nonatomic) NSString describeString;
@property (nonatomic) NSString describeSelectedString;
@property (nonatomic) NSAttributedString reminderAttrDescribeString;
@property (nonatomic) BOOL haveSelectedState;
@property (nonatomic) BOOL showSelected;
@property (nonatomic) BOOL disableInteraction;
@property (nonatomic) @? action;
@property (nonatomic) @? closeAction;
@property (nonatomic) UIView subView;
@property (nonatomic) {CGSize=dd} subViewSize;
@property (nonatomic) double rightSpace;
@property (nonatomic) UIView leftSubView;
@property (nonatomic) {CGSize=dd} leftSubViewSize;
@property (nonatomic) double leftSpace;
@property (nonatomic) UIView totalView;
@property (nonatomic) double totalViewTopSpace;
@property (nonatomic) double totalViewBottomSpace;
@property (nonatomic) double totalViewLeftSpace;
@property (nonatomic) double totalViewRightSpace;
@property (nonatomic) BOOL isModern;
@property (nonatomic) UIView modernLongPressCell;
@property (nonatomic) NSString navigationTitle;
@property (nonatomic) UIView navigationView;
@property (nonatomic) NSString navigationMiniTitle;
@property (nonatomic) UIView navigationMiniView;
@property (nonatomic) UIView modernCellIconView;
@property (nonatomic) AWELongPressPanelViewGroupModel currentGroupModel;
@property (nonatomic) AWECodeGenModuleItemModel currentModuleItemModel;
@property (nonatomic) BOOL isAppearing;
@property (nonatomic) LOTAnimationView livingAnimView;
@property (nonatomic) BOOL hasShareFriend;
@property (nonatomic) BOOL hasShowFirstClickShock;
@property (nonatomic) BOOL friendsIsOnline;
@property (nonatomic) NSString activeString;
@property (nonatomic) BOOL authorIsCurrentUser;
@property (nonatomic) BOOL showIfNeed;
@property (nonatomic) AWEShareItem shareItem;
@property (nonatomic) BOOL hasSelectContact;
@property (nonatomic) @? willAppearBlock;
@property (nonatomic) BOOL applyGrayMode;
@property (nonatomic) NSString grayToastString;
@property (nonatomic) q sectionType;
@property (nonatomic) q priority;
@property (nonatomic) BOOL hasTrackVMShow;
@property (nonatomic) BOOL firstScreenIfShow;
@property (nonatomic) NSString clickPosition;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDuxIconName:;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setDescribeString:;
- (void)setLogExtraDict:;
- (id)referString;
- (void)setEnterMethod:;
- (void)setReferString:;
- (id)logExtraDict;
- (id)enterMethod;
- (void)setClickPosition:;
- (id)willAppearBlock;
- (void)setWillAppearBlock:;
- (void)setIconBackgroundColor:;
- (id)clickPosition;
- (BOOL)showIfNeed;
- (BOOL)needShow;
- (BOOL)authorIsCurrentUser;
- (id)panelManager;
- (void)setPanelManager:;
- (id)aAWEPlayInteractionAdapter;
- (id)navigationView;
- (void)setNavigationView:;
- (void)setAuthorIsCurrentUser:;
- (id)duxIconColor;
- (void)trackCellClick;
- (id)getCommonArrowImageV;
- (void)setSubView:;
- (void)setRightSpace:;
- (id)panelBizVMIdentifier;
- (id)getCommonSwitch;
- (BOOL)needShowForScene:;
- (void)setHasSelectContact:;
- (void)setSheetBackgroundColor:;
- (BOOL)friendsIsOnline;
- (void)trackCellShow;
- (BOOL)hasTrackVMShow;
- (void)setHasTrackVMShow:;
- (BOOL)hasShareFriend;
- (BOOL)hasSelectContact;
- (id)describeString;
- (id)duxIconName;
- (BOOL)needShowWithModelType:awemeModel:referString:;
- (BOOL)shouldReverse;
- (BOOL)firstScreenIfShow;
- (id)commonTrackParamsWithBizVM:;
- (id)subView;
- (double)rightSpace;
- (id)getCommonSegmentWithItems:delegate:;
- (double)getCellHeight;
- (id)duxIconSelectedName;
- (void)setDuxIconSelectedName:;
- (void)setDuxIconColor:;
- (id)duxIconSelectedColor;
- (void)setDuxIconSelectedColor:;
- (id)sheetBackgroundColor;
- (id)iconBackgroundColor;
- (id)describeSelectedString;
- (void)setDescribeSelectedString:;
- (id)reminderAttrDescribeString;
- (void)setReminderAttrDescribeString:;
- (BOOL)haveSelectedState;
- (void)setHaveSelectedState:;
- (BOOL)showSelected;
- (void)setShowSelected:;
- (id)subViewSize;
- (void)setSubViewSize:;
- (id)leftSubView;
- (void)setLeftSubView:;
- (id)leftSubViewSize;
- (void)setLeftSubViewSize:;
- (double)leftSpace;
- (void)setLeftSpace:;
- (id)totalView;
- (void)setTotalView:;
- (double)totalViewTopSpace;
- (void)setTotalViewTopSpace:;
- (double)totalViewBottomSpace;
- (void)setTotalViewBottomSpace:;
- (double)totalViewLeftSpace;
- (void)setTotalViewLeftSpace:;
- (double)totalViewRightSpace;
- (void)setTotalViewRightSpace:;
- (id)modernLongPressCell;
- (void)setModernLongPressCell:;
- (id)navigationMiniTitle;
- (void)setNavigationMiniTitle:;
- (id)navigationMiniView;
- (void)setNavigationMiniView:;
- (id)modernCellIconView;
- (void)setModernCellIconView:;
- (id)currentGroupModel;
- (void)setCurrentGroupModel:;
- (id)currentModuleItemModel;
- (void)setCurrentModuleItemModel:;
- (id)livingAnimView;
- (void)setLivingAnimView:;
- (void)setHasShareFriend:;
- (BOOL)hasShowFirstClickShock;
- (void)setHasShowFirstClickShock:;
- (void)setFriendsIsOnline:;
- (id)activeString;
- (void)setActiveString:;
- (void)setShowIfNeed:;
- (BOOL)applyGrayMode;
- (void)setApplyGrayMode:;
- (id)grayToastString;
- (void)setGrayToastString:;
- (void)setFirstScreenIfShow:;
- (unsigned long long)actionType;
- (void)setActionType:;
- (id)iconImage;
- (void)setNavigationTitle:;
- (void)setIconImage:;
- (void)setCloseAction:;
- (long long)sectionType;
- (id)navigationTitle;
- (long long)priority;
- (BOOL)disableInteraction;
- (void)setAction:;
- (BOOL)isAppearing;
- (void)setSectionType:;
- (id)action;
- (void)setPriority:;
- (void).cxx_destruct;
- (void)setIsAppearing:;
- (BOOL)isModern;
- (id)closeAction;
- (void)setDisableInteraction:;
- (id)iconImageURL;
- (void)setIconImageURL:;
- (void)setShareItem:;
- (id)shareItem;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (id)longPressPanelViewModel;
+ (BOOL)enableDecouple;
@end
