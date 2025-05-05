@interface SBSInCallPresentationRequest : NSObject
+ (void)performPresentationWithConfiguration:completion:;
+ (id)identifiersForRequestedPresentations;
+ (void)notePresentationEndForRequestWithIdentifier:;
@end
