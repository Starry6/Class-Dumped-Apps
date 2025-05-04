@interface AWENearbyInnerLynxWidgetManager : NSObject
@property (nonatomic) BOOL globalWidgetOriginalHidden;
@property (nonatomic) BOOL showingNearbyWidget;
@property (nonatomic) AWENearbyInnerFeedWidget widget;
@property (nonatomic) NSString lynxSchema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxSchema;
- (void)setLynxSchema:;
- (id)aAWENearbyInnerLynxWidgetManagerDOUYINLiteAdapter;
- (BOOL)canShowWidget;
- (id)convertCorePositionFromGlobalWidget;
- (BOOL)showingNearbyWidget;
- (void)setGlobalWidgetOriginalHidden:;
- (void)setShowingNearbyWidget:;
- (id)convertCorePositionToGlobalWidgetCenter;
- (BOOL)globalWidgetOriginalHidden;
- (void)showWidgetWithSchema:completion:;
- (void)removeWidgetAndShowGlobalWidget;
- (void)releaseWidget;
- (void)setWidgetHidden:;
- (id)widget;
- (void)setWidget:;
- (void).cxx_destruct;
+ (Class)aAWENearbyInnerLynxWidgetManagerDOUYINLiteAdapterClass;
+ (id)shareInstance;
@end
