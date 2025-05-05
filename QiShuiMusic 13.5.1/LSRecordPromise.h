@interface LSRecordPromise : NSObject
- (id)init;
- (id)_initWithRecord:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithRecord:error:;
- (id)fulfillReturningError:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
