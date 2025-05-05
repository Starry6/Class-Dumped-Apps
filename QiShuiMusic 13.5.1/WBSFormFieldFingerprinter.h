@interface WBSFormFieldFingerprinter : NSObject
+ (id)fingerprintForControlMetadata:;
+ (id)_fingerprintComponentsForControlMetadata:;
+ (id)_hashForString:;
@end
