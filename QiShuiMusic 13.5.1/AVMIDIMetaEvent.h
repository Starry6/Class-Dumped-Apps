@interface AVMIDIMetaEvent : AVMusicEvent
@property (nonatomic) ^{MIDIMetaEvent=CCCCI[1C]} metaEvent;
@property (nonatomic) q type;
- (void)dealloc;
- (long long)type;
- (id)initWithType:data:;
- (id)initWithMetaEvent:;
- (id)metaEvent;
@end
