@interface IESLiveLayoutZContainer : NSObject
@property (nonatomic) HTSEventForwardingView forwardingView;
@property (nonatomic) NSArray sortedLevels;
@property (nonatomic) UIView view;
@property (nonatomic) NSString containerType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addPluginview:;
- (void)addSubview:viewType:;
- (void)addSubview:viewType:insets:;
- (void)addSubview:viewType:insets:size:;
- (void)addSubview:viewType:size:;
- (id)forwardingView;
- (id)initWithIdentifier:sortedLevels:;
- (void)setForwardingView:;
- (void)setSortedLevels:;
- (id)sortedLevels;
- (id)viewContainersMapping;
- (id)view;
- (void).cxx_destruct;
- (id)containerType;
- (id)itemForType:;
- (void)removeType:;
@end
