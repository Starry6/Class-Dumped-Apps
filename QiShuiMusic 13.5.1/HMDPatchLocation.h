@interface HMDPatchLocation : NSObject
@property (nonatomic) ^v location;
@property (nonatomic) Q addend;
@property (nonatomic) I metaData;
@property (nonatomic) I diversity;
@property (nonatomic) I high8;
@property (nonatomic) I authenticated;
@property (nonatomic) I key;
@property (nonatomic) I useAddrDiversity;
- (unsigned long long)addend;
- (unsigned int)diversity;
- (unsigned int)high8;
- (id)initWithLocation:addend:metaData:;
- (BOOL)patchReplacement:;
- (void)setAddend:;
- (unsigned long long)signPointer:location:useDiversity:diversity:key:;
- (BOOL)supportSignPointer;
- (unsigned int)useAddrDiversity;
- (void)setMetaData:;
- (unsigned int)key;
- (unsigned int)authenticated;
- (id)location;
- (unsigned int)metaData;
- (void)setLocation:;
@end
