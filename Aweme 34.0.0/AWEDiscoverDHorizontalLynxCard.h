@interface AWEDiscoverDHorizontalLynxCard : LynxUI
@property (nonatomic) AWEDiscoverDHorizontalAutoPlayViewController horizontalAutoPlayViewController;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) double height;
@property (nonatomic) double width;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double itemSpace;
@property (nonatomic) NSString sessionID;
@property (nonatomic) NSDictionary schemaConfig;
@property (nonatomic) @? willPlayCompletion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cardModel;
- (id)hotSpotKeyword;
- (double)itemSpace;
- (void)setItemSpace:;
- (void)videoWillPlay;
- (void)videoWillStop;
- (void)updateWithCardModel:;
- (double)playerHeight;
- (id)itemSchema;
- (void)horizontalPlayerWillPlay;
- (id)itemSizeForHorizontalAutoPlayViewController:;
- (double)itemSpacingForHorizontalAutoPlayViewController:;
- (double)leftMarginForHorizontalAutoPlayViewController:;
- (double)rightMarginForHorizontalAutoPlayViewController:;
- (id)horizontalAutoPlayViewController;
- (id)willPlayCompletion;
- (id)schemaConfig;
- (void)setHeight:requestReset:;
- (void)setWidth:requestReset:;
- (void)setLeftMargin:requestReset:;
- (void)setRightMargin:requestReset:;
- (void)setItemSpace:requestReset:;
- (void)setSessionID:requestReset:;
- (void)setSchemaConfig:requestReset:;
- (void)setWillPlayCompletion:;
- (void)setHorizontalAutoPlayViewController:;
- (void)setSchemaConfig:;
- (void)setSessionID:;
- (void)setModel:;
- (double)leftMargin;
- (id)init;
- (void)setHeight:;
- (void)setWidth:;
- (void)setLeftMargin:;
- (double)width;
- (id)model;
- (id)sessionID;
- (void).cxx_destruct;
- (double)rightMargin;
- (double)height;
- (void)setRightMargin:;
- (id)cardType;
- (id)createView;
+ (id)__lynx_prop_config__930;
+ (id)__lynx_prop_config__971;
+ (id)__lynx_prop_config__1012;
+ (id)__lynx_prop_config__1053;
+ (id)__lynx_prop_config__1094;
+ (id)__lynx_prop_config__1135;
+ (id)__lynx_prop_config__1186;
@end
