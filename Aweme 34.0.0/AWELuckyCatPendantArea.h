@interface AWELuckyCatPendantArea : MTLModel
@property (nonatomic) AWELuckyCatPendantAnimate pendantAnimate;
@property (nonatomic) AWELuckyCatPendantExtendArea pendantExtendArea;
@property (nonatomic) AWELuckyCatPendantBackground background;
@property (nonatomic) AWELuckyCatPendantDescTemplate title;
@property (nonatomic) AWELuckyCatPendantBubble pendantBubble;
@property (nonatomic) AWELuckyCatPendantBubble interruptCapsule;
@property (nonatomic) AWELuckyCatPendantBubble pendantCapsule;
@property (nonatomic) BOOL removeInterruptCapsuleAfterClick;
@property (nonatomic) NSString bizType;
@property (nonatomic) q priority;
@property (nonatomic) AWELuckyCatPendantClickEvent clickEvent;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) NSString extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (void)setLogExtra:;
- (id)logExtra;
- (id)bizType;
- (void)setBizType:;
- (id)pendantAnimate;
- (void)setPendantAnimate:;
- (id)pendantExtendArea;
- (void)setPendantExtendArea:;
- (id)pendantBubble;
- (void)setPendantBubble:;
- (id)interruptCapsule;
- (void)setInterruptCapsule:;
- (id)pendantCapsule;
- (void)setPendantCapsule:;
- (BOOL)removeInterruptCapsuleAfterClick;
- (void)setRemoveInterruptCapsuleAfterClick:;
- (id)extra;
- (long long)priority;
- (id)background;
- (void)setClickEvent:;
- (void)setBackground:;
- (void)setPriority:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)clickEvent;
+ (id)JSONKeyPathsByPropertyKey;
@end
