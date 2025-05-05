@interface VCSessionErrorUtils : NSObject
+ (id)VCSessionErrorEvent:errorPath:returnCode:;
+ (id)VCSessionParticipantErrorEvent:errorPath:;
+ (id)VCSessionCaptionsErrorEvent:errorPath:returnCode:;
@end
