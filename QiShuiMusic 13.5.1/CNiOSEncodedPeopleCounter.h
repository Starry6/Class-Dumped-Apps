@interface CNiOSEncodedPeopleCounter : NSObject
- (void).cxx_destruct;
- (id)initWithFetchRequest:addressBook:managedConfiguration:;
- (BOOL)supportsCounting;
- (id)fetchContactCountWithError:;
@end
