@interface SSMutableLogConfig : SSLogConfig
@property (nonatomic) NSString category;
@property (nonatomic) Q environment;
@property (nonatomic) NSString outputDirectory;
@property (nonatomic) NSString outputFilename;
@property (nonatomic) NSString subsystem;
@property (nonatomic) BOOL writeToDisk;
@end
