@interface TSMTIEMask : NSObject
@property (nonatomic) NSArray elements;
@property (nonatomic) NSString name;
- (void)setName:;
- (id)elements;
- (void)setElements:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)name;
- (BOOL)mtieConformsToMask:withErrors:;
- (id)mtieMaskFromStart:toEnd:withStep:;
+ (id)UDPHardwareMask;
+ (id)UDPSoftwareMask;
+ (id)gPTPMask1;
+ (id)gPTPMask2;
+ (id)gPTPMask3;
+ (id)gPTP7Hop;
+ (id)gPTP1Hop;
@end
