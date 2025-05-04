@interface AWEBoxedNumber : NSObject
@property (nonatomic) NSNumber value;
- (id)archivedWCTValue;
- (id)value;
- (id)initWithValue:;
- (void).cxx_destruct;
+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:;
+ (id)boxedNumberWithValue:;
@end
