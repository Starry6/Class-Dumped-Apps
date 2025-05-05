@interface AVParameterEvent : AVMusicEvent
@property (nonatomic) ^{ParameterEvent=IIIf} event;
@property (nonatomic) I parameterID;
@property (nonatomic) I scope;
@property (nonatomic) I element;
@property (nonatomic) float value;
- (unsigned int)element;
- (id)event;
- (void)setScope:;
- (unsigned int)scope;
- (void)setValue:;
- (float)value;
- (void)setElement:;
- (id)initWithParameterID:scope:element:value:;
- (unsigned int)parameterID;
- (void)setParameterID:;
- (id)initWithParameterEvent:;
@end
