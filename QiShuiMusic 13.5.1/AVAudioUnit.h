@interface AVAudioUnit : AVAudioNode
@property (nonatomic) {AudioComponentDescription=IIIII} audioComponentDescription;
@property (nonatomic) ^{OpaqueAudioComponentInstance=} audioUnit;
@property (nonatomic) AUAudioUnit AUAudioUnit;
@property (nonatomic) NSString name;
@property (nonatomic) NSString manufacturerName;
@property (nonatomic) Q version;
- (id)manufacturerName;
- (unsigned long long)version;
- (id)audioUnit;
- (id)name;
- (id)audioComponentDescription;
- (id)initWithAudioComponentDescription:;
- (BOOL)loadAudioUnitPresetAtURL:error:;
- (BOOL)setValue:forParam:;
- (float)valueForParam:;
+ (void)instantiateWithComponentDescription:options:completionHandler:;
@end
