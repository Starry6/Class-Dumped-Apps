@interface ConferenceDatatypeConverter : NSObject
+ (id)ekDeserializationResultFromCalDeserializationResult:;
+ (id)calVirtualConferenceFromEKVirtualConference:;
+ (id)_ekVirtualConferenceFromCalVirtualConference:;
+ (id)_calJoinMethodFromEKJoinMethod:;
+ (id)_calJoinMethodsFromEKJoinMethods:;
+ (id)_ekJoinMethodFromCalJoinMethod:;
+ (id)_ekJoinMethodsFromCalJoinMethods:;
+ (unsigned long long)_calSourceFromEKSource:;
+ (unsigned long long)_ekSourceFromCalSource:;
@end
