@interface IESLiveStreamPlayerLayoutBase : NSObject
@property (nonatomic) IESLiveStreamPlayerLayoutMachine layoutMachine;
@property (nonatomic) Q layoutType;
@property (nonatomic) IESLiveStreamUnifyBaseLayoutMachine unifyLayoutMachine;
@property (nonatomic) <IESLiveStreamUnifyLayoutPlayer> player;
@property (nonatomic) IESLiveStreamUnifyLayoutContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithPlayer:layoutMachine:;
- (id)layoutMachine;
- (BOOL)layoutWithMetaInfo:;
- (void)layoutWithPreviousType:;
- (id)mainBounds;
- (BOOL)shouldUseCurrentLayoutType;
- (id)unifyLayoutMachine;
- (unsigned long long)layoutType;
- (void)setLayoutType:;
- (void)dealloc;
- (id)context;
- (id)player;
- (void).cxx_destruct;
- (id)layoutFrame;
@end
