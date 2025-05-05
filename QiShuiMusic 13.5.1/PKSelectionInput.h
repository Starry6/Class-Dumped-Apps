@interface PKSelectionInput : NSObject
@property (nonatomic) q selectionType;
@property (nonatomic) {CGPoint=dd} location;
@property (nonatomic) q inputType;
- (id)location;
- (void)setLocation:;
- (void)setSelectionType:;
- (long long)selectionType;
- (long long)inputType;
- (void)setInputType:;
+ (id)inputWithType:location:inputType:;
@end
