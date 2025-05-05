@interface CNData : NSObject
@property (nonatomic) CNFileManager fileManager;
@property (nonatomic) CNURLSessionFactory sessionFactory;
- (id)fileManager;
- (id)init;
- (id)sessionFactory;
- (id)observableWithContentsOfURL:;
- (void).cxx_destruct;
- (id)writeData:toURL:options:;
- (id)dataWithContentsOfURL:;
- (id)initWithFileManager:urlSessionFactory:;
- (id)initWithFileManager:;
+ (unsigned long long)NSDataWritingOptionsFromCNDataWritingOptions:;
+ (id)observableWithContentsOfURL:;
+ (id)observableWithContentsOfURL:sessionFactory:;
+ (id)dataWithContentsOfURL:sessionFactory:;
+ (id)writeData:toURL:options:fileManager:;
+ (id)writeData:toURL:options:;
+ (id)dataWithContentsOfURL:;
+ (id)dataWithContentsOfFileURL:;
@end
