@interface CNContactHandleStringIndexer : NSObject
@property (nonatomic) CNCache indexImpl;
@property (nonatomic) NSArray targetHandleStrings;
@property (nonatomic) NSDictionary index;
- (id)init;
- (id)index;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTargetHandleStrings:;
- (id)indexWithRawHandles;
- (void)indexContacts:;
- (void)indexContact:;
- (void)indexEmailAddressesOnContact:;
- (void)indexPhoneNumbersOnContact:;
- (id)indexImpl;
- (id)targetHandleStrings;
+ (id)indexByMatchingIndexWithRawHandles:toTargetHandleStrings:;
@end
