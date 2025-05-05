@interface AVAUPresetEvent : AVMusicEvent
@property (nonatomic) ^{AUPresetEvent=II^v} event;
@property (nonatomic) I scope;
@property (nonatomic) I element;
@property (nonatomic) NSDictionary presetDictionary;
- (unsigned int)element;
- (void)dealloc;
- (id)event;
- (void)setScope:;
- (unsigned int)scope;
- (void)setElement:;
- (id)initWithScope:element:dictionary:;
- (id)presetDictionary;
- (id)initWithAUPresetEvent:;
@end
