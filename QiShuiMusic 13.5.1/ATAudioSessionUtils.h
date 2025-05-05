@interface ATAudioSessionUtils : NSObject
+ (id)categories;
+ (unsigned long long)getCategoryOptionFromPropertyID:;
+ (id)getAVASProperty:;
+ (unsigned int)getAudioSessionProperty:;
+ (id)getAVASCategory:;
+ (unsigned int)getAudioSessionCategory:;
+ (id)getAVASMode:;
+ (unsigned int)getAudioSessionMode:;
+ (id)getAudioSessionPortType:forInput:;
+ (id)getMappedObjectOf:inside:ofType:;
+ (id)KVOProperties;
+ (id)modes;
+ (id)inputPortTypes;
+ (id)outputPortTypes;
+ (id)getRouteDescriptionFromAVASRouteDescription:;
+ (id)getRouteStringFromAVASRouteDescription:;
+ (id)getPorts:forInput:;
+ (id)getPort:forInput:;
@end
