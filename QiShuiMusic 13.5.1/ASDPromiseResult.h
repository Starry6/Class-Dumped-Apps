@interface ASDPromiseResult : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) @ value;
- (id)init;
- (id)error;
- (void).cxx_destruct;
- (id)value;
+ (id)resultWithError:;
+ (id)resultWithValue:;
@end
