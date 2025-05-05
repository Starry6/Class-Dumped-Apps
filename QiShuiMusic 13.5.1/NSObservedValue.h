@interface NSObservedValue : NSObject
@property (nonatomic) @ value;
@property (nonatomic) NSError error;
@property (nonatomic) BOOL finished;
- (void)setFinished:;
- (void)dealloc;
- (BOOL)finished;
- (void)setError:;
- (id)error;
- (id)debugDescription;
- (void)setValue:;
- (id)description;
- (id)value;
- (BOOL)_isToManyChangeInformation;
- (id)copyToHeap;
@end
