@interface DOMMutationEvent : DOMEvent
@property (nonatomic) DOMNode relatedNode;
@property (nonatomic) NSString prevValue;
@property (nonatomic) NSString newValue;
@property (nonatomic) NSString attrName;
@property (nonatomic) S attrChange;
- (id)newValue;
- (id)relatedNode;
- (id)prevValue;
- (id)attrName;
- (unsigned short)attrChange;
- (void)initMutationEvent:canBubble:cancelable:relatedNode:prevValue:newValue:attrName:attrChange:;
- (void)initMutationEvent::::::::;
@end
